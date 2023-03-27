int led2 = D7;
int buttonPin = D4;

void setup() 
{
    pinMode( led2, OUTPUT );
    pinMode( buttonPin , INPUT_PULLUP );
}

void dot() 
{
    digitalWrite( led2, HIGH );
    delay(100);
    digitalWrite( led2, LOW );
    delay(500);
}

void dash()
{
    digitalWrite( led2, HIGH );
    delay(700);
    digitalWrite( led2, LOW );
    delay(500);
}

void loop() 
{
    
    int buttonState = digitalRead( buttonPin );
    
    if( buttonState == LOW )
    {
    dash();
    dot();
    dot();
    dot();
    
    delay(700);
    
    dot();
    dot();
    dot();
    dot();
    
    delay(700);
    
    dot();
    dash();
    
    delay(700);
    
    dot();
    dot();
    dot();
    dash();
    
    delay(700);
    
    dot();
    
    delay(700);
    
    dot();
    dot();
    dot();
    
    delay(700);
    
    dot();
    dot();
    dot();
    dot();
    
    delay(2000);
    
    digitalWrite( led2, HIGH );
    }
    else 
    {
        
    dash();
    dot();
    dot();
    dot();
    
    delay(700);
    
    dot();
    dot();
    dot();
    dot();
    
    delay(700);
    
    dot();
    dash();
    
    delay(700);
    
    dot();
    dot();
    dot();
    dash();
    
    delay(700);
    
    dot();
    
    delay(700);
    
    dot();
    dot();
    dot();
    
    delay(700);
    
    dot();
    dot();
    dot();
    dot();
    
    delay(2000);
    
    digitalWrite( led2, LOW );
    }
}
