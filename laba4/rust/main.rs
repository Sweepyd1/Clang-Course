use std::io::{self, BufRead};

fn main() {
    
    let stdin = io::stdin(); 
    let handle = stdin.lock(); 

    let mut char_count = 0; 
    let mut line_count = 0; 
    let mut word_count = 0; 
    let mut is_word = false; 

    for line in handle.lines() {
        let line = line.unwrap(); 
        line_count += 1; 

        for c in line.chars() {
            char_count += 1; 
            if c.is_whitespace() { 
                if is_word {
                    word_count += 1; 
                    is_word = false; 
                }
            } else {
                is_word = true; 
            }
        }

        
        if is_word {
            word_count += 1;
            is_word = false; 
        }
        
       
    }
    println!("");
    println!("Lines: {}", line_count);
    println!("Characters: {}", char_count);
    println!("Words: {}", word_count);
}