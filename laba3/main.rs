use std::time::Instant;

fn main() {
    let start_time = Instant::now(); 

    println!("hello world!");
    println!("{:<10} {:<15} {:<10}", "Цельсии", "Фаренгейты", "Кельвины"); 

    for i in (0..=100).step_by(10) {
        let celsius = i as f32;
        let fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        let kelvin = celsius + 273.15;

       
        println!("{} \t\t{} \t\t{}", celsius, fahrenheit, kelvin);
    }

    let duration = start_time.elapsed(); 
    let microseconds = duration.as_micros(); 
    println!("Время выполнения: {} микросекунд", microseconds);
}