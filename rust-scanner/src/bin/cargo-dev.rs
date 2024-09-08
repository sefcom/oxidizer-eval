use std::process::Command;

fn main() {
    let path = "../dataset/simple-http-server";
    Command::new("cargo")
        .args(["+nightly", "clean"])
        .current_dir(path)
        .output()
        .expect(format!("Failed to clean {}", path).as_str());
    let output = Command::new("cargo")
        .args(["+nightly", "build"])
        .current_dir(path)
        .env("RUSTC", "rust-scanner")
        .output()
        .expect(format!("Failed to compile {}", path).as_str());
    print!("{}", String::from_utf8(output.stdout).unwrap());
}
