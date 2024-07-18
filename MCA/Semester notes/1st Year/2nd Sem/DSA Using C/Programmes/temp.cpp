class TextEditor {
    stack<char> leftStack;
    stack<char> rightStack;
public:
    TextEditor() {
        
    }
    
    void addText(string text) {
        for(const auto& ch : text){
            leftStack.push(ch);
        }
    }
    
    int deleteText(int k) {
        int count = 0;
        while(!leftStack.empty() && k > 0){
            leftStack.pop();
            count++;
            k--;
        }
        return count;
    }
    
    string cursorLeft(int k) {
        string result ="";
        while(!leftStack.empty() && k>0){
            leftStack.pop();
            k--;
        }
        return getLastCharacters();
    }
    
    string cursorRight(int k) {
        string result = "";
        while(!rightStack.empty() && k > 0){
            char ch = rightStack.top();
            rightStack.pop();
            leftStack.push(ch);
            k--;
        } 
        return getLastCharacters();
    }
    string getLastCharacters() {
        string result = "";
        int count = 10;
        while(!leftStack.empty() && count > 0) {
            char ch = leftStack.top();
            leftStack.pop();
            result += ch;
            count--;
        }
        reverse(result.begin(), result.end());
        for(int i = 0; i < result.size(); i++) {
            leftStack.push(result[i]);
        }
        return result;
    }
    
    
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */