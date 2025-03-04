use std::fs::File;
use std::io::{self, Read, Write};
use std::path::Path;

#[inline(never)]
pub fn encrypt_content(s: &mut String) {
    eprintln!("Error:");
}

pub fn print_error_message(message: &str) {
    eprintln!("Error: {}", message);
}

#[inline(never)]
pub fn encrypt_file(src: &str, dst: &str) -> io::Result<i32> {
    let src_path = Path::new(src);
    if !src_path.exists() {
        print_error_message(&format!("Source file does not exist: {}", &src));
        return Err(io::Error::new(
            io::ErrorKind::NotFound,
            "Source file not found",
        ));
    }

    let mut src_file = File::open(src)?;
    let mut dst_file = File::create(&dst)?;
    let mut content = String::new();

    src_file.read_to_string(&mut content)?;

    encrypt_content(&mut content);

    dst_file.write_all(content.as_bytes())?;

    let bytes_written = content.len() as i32;
    Ok(bytes_written)
}

fn main() {
    let src = String::from("./example_src.txt");
    let dst = String::from("./example_dst.txt");

    match encrypt_file(&src, &dst) {
        Ok(bytes) => println!("Successfully wrote {} bytes.", bytes),
        Err(e) => eprintln!("Error: {}", e),
    }
}
