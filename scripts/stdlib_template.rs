use std::collections::*;
use std::sync::*;
use std::io::{self, Write, Read};
use std::path::{Path, PathBuf};
use std::thread;
use std::time::{Duration, SystemTime, Instant};
use std::str;
use std::string::String;
use std::vec::Vec;
use std::boxed::Box;
use std::rc::Rc;
use std::sync::Arc;
use std::cell::{Cell, RefCell};
use std::convert::TryFrom;
use std::cmp::Ord;
use std::iter::*;
use std::mem;

#[allow(dead_code)]
fn test_vec_operations() {
    let mut v = Vec::new();
    v.push(1);
    v.push(2);
    v.pop();
    v.insert(0, 3);
    v.remove(0);
    v.extend_from_slice(&[4, 5, 6]);
    v.append(&mut vec![7, 8]);
    v.retain(|&x| x > 3);
    v.sort();
    v.reverse();
    v.dedup();
    v.resize(10, 0);
    v.truncate(5);
    v.clear();
    let _ = v.iter().sum::<i32>();
    let _ = v.iter().max();
    let _ = v.iter().min();
    let _ = v.binary_search(&5);
    let _ = v.contains(&1);
    let _ = v.starts_with(&[1, 2]);
    let _ = v.ends_with(&[3, 4]);
    let _ = v.split_at(2);
    let _ = v.split_at_mut(2);
    let _: Vec<i32> = Vec::with_capacity(100);
    v.reserve(50);
    v.shrink_to_fit();
}

#[allow(dead_code)]
fn test_string_operations() {
    let mut s = String::new();
    s.push('a');
    s.push_str("hello");
    s.insert(0, 'b');
    s.insert_str(1, "world");
    s.remove(0);
    s.pop();
    s.clear();
    let _ = s.len();
    let _ = s.is_empty();
    let _ = s.capacity();
    s.reserve(100);
    s.shrink_to_fit();
    let _ = s.contains("test");
    let _ = s.starts_with("te");
    let _ = s.ends_with("st");
    let _ = s.find("e");
    let _ = s.rfind("e");
    let _ = s.replace("e", "a");
    let _ = s.split("a").collect::<Vec<_>>();
    let _ = s.split_whitespace().collect::<Vec<_>>();
    let _ = s.lines().collect::<Vec<_>>();
    let _ = s.trim();
    let _ = s.trim_start();
    let _ = s.trim_end();
    let _ = s.to_uppercase();
    let _ = s.to_lowercase();
    let _ = s.repeat(3);
    let _ = String::from("test");
    let _ = String::with_capacity(50);
    let _ = format!("{}", 123);
    let _ = format!("{:?}", vec![1, 2, 3]);
    let _ = format!("{:#?}", vec![1, 2, 3]);
    let _ = format!("{:x}", 255);
    let _ = format!("{:X}", 255);
    let _ = format!("{:o}", 255);
    let _ = format!("{:b}", 255);
    let _ = format!("{:e}", 1.23);
    let _ = format!("{:E}", 1.23);
    let _ = format!("{:p}", &s as *const _);
    let _ = format!("{:<10}", "left");
    let _ = format!("{:>10}", "right");
    let _ = format!("{:^10}", "center");
    let _ = format!("{:.*}", 2, 1.23456);
}

#[allow(dead_code)]
fn test_hashmap_operations() {
    let mut m = HashMap::new();
    m.insert(1, "one");
    m.insert(2, "two");
    let _ = m.get(&1);
    let _ = m.get_mut(&2);
    let _ = m.contains_key(&1);
    m.remove(&1);
    m.clear();
    let _ = m.len();
    let _ = m.is_empty();
    let _ = m.iter().count();
    let _ = m.keys().collect::<Vec<_>>();
    let _ = m.values().collect::<Vec<_>>();
    let _ = m.entry(1).or_insert("default");
    m.reserve(100);
    m.shrink_to_fit();
    let _: HashMap<i32, &str> = HashMap::with_capacity(50);
}

#[allow(dead_code)]
fn test_hashset_operations() {
    let mut s = HashSet::new();
    s.insert(1);
    s.insert(2);
    let _ = s.contains(&1);
    s.remove(&1);
    s.clear();
    let _ = s.len();
    let _ = s.is_empty();
    let _ = s.iter().count();
    let mut s2 = HashSet::new();
    s2.insert(2);
    s2.insert(3);
    let _ = s.union(&s2).count();
    let _ = s.intersection(&s2).count();
    let _ = s.difference(&s2).count();
    let _ = s.symmetric_difference(&s2).count();
    let _ = s.is_subset(&s2);
    let _ = s.is_superset(&s2);
    let _ = s.is_disjoint(&s2);
    s.reserve(100);
    s.shrink_to_fit();
}

#[allow(dead_code)]
fn test_btreemap_operations() {
    let mut m = BTreeMap::new();
    m.insert(1, "one");
    m.insert(2, "two");
    let _ = m.get(&1);
    let _ = m.get_mut(&2);
    let _ = m.contains_key(&1);
    m.remove(&1);
    m.clear();
    let _ = m.len();
    let _ = m.is_empty();
    let _ = m.iter().count();
    let _ = m.keys().collect::<Vec<_>>();
    let _ = m.values().collect::<Vec<_>>();
    let _ = m.entry(1).or_insert("default");
    let _ = m.range(1..3).count();
}

#[allow(dead_code)]
fn test_btreeset_operations() {
    let mut s = BTreeSet::new();
    s.insert(1);
    s.insert(2);
    let _ = s.contains(&1);
    s.remove(&1);
    s.clear();
    let _ = s.len();
    let _ = s.is_empty();
    let _ = s.iter().count();
    let _ = s.range(1..3).count();
}

#[allow(dead_code)]
fn test_linkedlist_operations() {
    let mut l = LinkedList::new();
    l.push_back(1);
    l.push_front(2);
    l.pop_back();
    l.pop_front();
    l.append(&mut LinkedList::new());
    l.clear();
    let _ = l.len();
    let _ = l.is_empty();
    let _ = l.iter().count();
}

#[allow(dead_code)]
fn test_vecdeque_operations() {
    let mut v = VecDeque::new();
    v.push_back(1);
    v.push_front(2);
    v.pop_back();
    v.pop_front();
    v.insert(0, 3);
    v.remove(0);
    v.append(&mut VecDeque::new());
    v.clear();
    v.rotate_left(1);
    v.rotate_right(1);
    let _ = v.len();
    let _ = v.is_empty();
    let _ = v.iter().count();
    let _: VecDeque<i32> = VecDeque::with_capacity(100);
    v.reserve(50);
    v.shrink_to_fit();
}

#[allow(dead_code)]
fn test_binaryheap_operations() {
    let mut h = BinaryHeap::new();
    h.push(1);
    h.push(2);
    h.pop();
    let _ = h.peek();
    h.clear();
    let _ = h.len();
    let _ = h.is_empty();
    let _ = h.iter().count();
    let _: BinaryHeap<i32> = BinaryHeap::with_capacity(100);
    h.reserve(50);
    h.shrink_to_fit();
}

#[allow(dead_code)]
fn test_rc_operations() {
    let rc = Rc::new(5);
    let rc2 = Rc::clone(&rc);
    let _ = Rc::strong_count(&rc);
    let _ = Rc::weak_count(&rc);
    let weak = Rc::downgrade(&rc);
    let _ = weak.upgrade();
    drop(rc);
    drop(rc2);
}

#[allow(dead_code)]
fn test_arc_operations() {
    let arc = Arc::new(5);
    let arc2 = Arc::clone(&arc);
    let _ = Arc::strong_count(&arc);
    let _ = Arc::weak_count(&arc);
    let weak = Arc::downgrade(&arc);
    let _ = weak.upgrade();
    drop(arc);
    drop(arc2);
}

#[allow(dead_code)]
fn test_cell_operations() {
    let c = Cell::new(5);
    c.set(10);
    let _ = c.get();
    c.replace(15);
    c.swap(&Cell::new(20));
}

#[allow(dead_code)]
fn test_refcell_operations() {
    let c = RefCell::new(vec![1, 2, 3]);
    let _ = c.borrow();
    let _ = c.borrow_mut();
    c.replace(vec![4, 5, 6]);
    c.swap(&RefCell::new(vec![7, 8, 9]));
}

#[allow(dead_code)]
fn test_mutex_operations() {
    let m = Mutex::new(5);
    let _guard = m.lock().unwrap();
    drop(_guard);
    let _result = m.try_lock();
    drop(_result);
}

#[allow(dead_code)]
fn test_rwlock_operations() {
    let l = RwLock::new(5);
    let _guard1 = l.read().unwrap();
    drop(_guard1);
    let _guard2 = l.write().unwrap();
    drop(_guard2);
    let _result1 = l.try_read();
    drop(_result1);
    let _result2 = l.try_write();
    drop(_result2);
}

#[allow(dead_code)]
fn test_thread_operations() {
    let handle = thread::spawn(|| {
        println!("Hello from thread");
    });
    handle.join().unwrap();

    thread::sleep(Duration::from_millis(10));
    thread::yield_now();
    let _ = thread::current();
}

#[allow(dead_code)]
fn test_io_operations() -> io::Result<()> {
    let mut buf = Vec::new();
    buf.write_all(b"hello")?;
    buf.flush()?;

    // Force inclusion of write! and writeln! macros
    write!(&mut buf, "write test {}", 42)?;
    writeln!(&mut buf, "writeln test {}", 42)?;

    let mut cursor = io::Cursor::new(vec![1, 2, 3]);
    let mut data = vec![];
    cursor.read_to_end(&mut data)?;

    let stdin = io::stdin();
    let _ = stdin.lock();

    let stdout = io::stdout();
    let _ = stdout.lock();

    // Force inclusion of _print function
    print!("print test");
    println!("println test");
    println!("{}", 123);
    println!("{:?}", vec![1, 2, 3]);

    // Force inclusion of _eprint function
    eprint!("error test");
    eprintln!("error test with newline");
    eprintln!("{}", 123);
    eprintln!("{:?}", vec![1, 2, 3]);

    Ok(())
}

#[allow(dead_code)]
fn test_path_operations() {
    let p = Path::new("/tmp/test");
    let _ = p.exists();
    let _ = p.is_file();
    let _ = p.is_dir();
    let _ = p.parent();
    let _ = p.file_name();
    let _ = p.extension();
    let _ = p.file_stem();
    let _ = p.components();
    let _ = p.to_path_buf();
    let _ = p.to_str();
    let _ = p.to_string_lossy();

    let mut pb = PathBuf::new();
    pb.push("/tmp");
    pb.push("test");
    pb.pop();
    pb.set_file_name("new");
    pb.set_extension("txt");
    pb = PathBuf::new();
}

#[allow(dead_code)]
fn test_time_operations() {
    let now = SystemTime::now();
    let _ = now.elapsed();
    let _ = now.duration_since(SystemTime::UNIX_EPOCH);

    let instant = Instant::now();
    let _ = instant.elapsed();

    let dur = Duration::from_secs(10);
    let _ = dur.as_secs();
    let _ = dur.as_millis();
    let _ = dur.as_micros();
    let _ = dur.as_nanos();
    let _ = dur.as_secs_f64();
}

#[allow(dead_code)]
fn test_option_operations() {
    let opt = Some(5);
    let _ = opt.is_some();
    let _ = opt.is_none();
    let _ = opt.unwrap_or(0);
    let _ = opt.unwrap_or_else(|| 0);
    let _ = opt.map(|x| x * 2);
    let _ = opt.and_then(|x| Some(x * 2));
    let _ = opt.or(Some(10));
    let _ = opt.or_else(|| Some(10));
    let _ = opt.filter(|&x| x > 3);
}

#[allow(dead_code)]
fn test_result_operations() {
    let res: Result<i32, &str> = Ok(5);
    let _ = res.is_ok();
    let _ = res.is_err();
    let res2 = res.clone();
    let _ = res2.unwrap_or(0);
    let res3 = res.clone();
    let _ = res3.unwrap_or_else(|_| 0);
    let res4 = res.clone();
    let _ = res4.map(|x| x * 2);
    let res5 = res.clone();
    let _: Result<i32, usize> = res5.map_err(|e| e.len());
    let res6 = res.clone();
    let _ = res6.and_then(|x| Ok(x * 2));
    let res7 = res.clone();
    let _: Result<i32, &str> = res7.or(Ok(10));
    let _: Result<i32, &str> = res.or_else(|_| Ok(10));
}

#[allow(dead_code)]
fn test_iterator_operations() {
    let v = vec![1, 2, 3, 4, 5];
    let _ = v.iter().sum::<i32>();
    let _ = v.iter().product::<i32>();
    let _ = v.iter().max();
    let _ = v.iter().min();
    let _ = v.iter().count();
    let _ = v.iter().collect::<Vec<_>>();
    let _ = v.iter().map(|x| x * 2).collect::<Vec<_>>();
    let _ = v.iter().filter(|&&x| x > 2).collect::<Vec<_>>();
    let _ = v.iter().fold(0, |acc, x| acc + x);
    let _ = v.iter().any(|&x| x > 3);
    let _ = v.iter().all(|&x| x > 0);
    let _ = v.iter().find(|&&x| x == 3);
    let _ = v.iter().position(|&x| x == 3);
    let _ = v.iter().take(3).collect::<Vec<_>>();
    let _ = v.iter().skip(2).collect::<Vec<_>>();
    let _ = v.iter().enumerate().collect::<Vec<_>>();
    let _ = v.iter().zip(&v).collect::<Vec<_>>();
    let _ = v.iter().chain(&v).collect::<Vec<_>>();
    let _ = v.iter().rev().collect::<Vec<_>>();
    let _ = v.iter().cycle().take(10).collect::<Vec<_>>();
}

#[allow(dead_code)]
fn test_slice_operations() {
    let s = [1, 2, 3, 4, 5];
    let _ = s.len();
    let _ = s.is_empty();
    let _ = s.first();
    let _ = s.last();
    let _ = s.get(2);
    let _ = s.split_at(2);
    let _ = s.split(|&x| x == 3).collect::<Vec<_>>();
    let _ = s.starts_with(&[1, 2]);
    let _ = s.ends_with(&[4, 5]);
    let _ = s.contains(&3);
    let _ = s.binary_search(&3);
    let _ = s.iter().sum::<i32>();
    let _ = s.chunks(2).collect::<Vec<_>>();
    let _ = s.windows(2).collect::<Vec<_>>();
}

#[allow(dead_code)]
fn test_mem_operations() {
    let x = 5;
    let _ = mem::size_of::<i32>();
    let _ = mem::size_of_val(&x);
    let _ = mem::align_of::<i32>();
    let _ = mem::align_of_val(&x);
    let mut y = 10;
    let mut z = 20;
    mem::swap(&mut y, &mut z);
    let _ = mem::replace(&mut y, 30);
    let mut v = vec![1, 2, 3];
    let _ = mem::replace(&mut v, Vec::new());
    drop(v);
}

#[allow(dead_code)]
fn test_ptr_operations() {
    let x = 5;
    let p = &x as *const i32;
    let _ = p.is_null();
    unsafe {
        let _ = p.read();
        let _ = p.offset(0);
        let _ = p.wrapping_offset(0);
    }
}

#[allow(dead_code)]
fn test_box_operations() {
    let b = Box::new(5);
    let _ = Box::leak(b);
    let b2 = Box::new(vec![1, 2, 3]);
    drop(b2);
}

#[allow(dead_code)]
fn test_conversion_operations() {
    let s = "123";
    let _ = s.parse::<i32>();
    let _ = i32::from_str_radix("ff", 16);
    let x: i64 = 5;
    let _ = i32::try_from(x);
    let _ = x.to_string();
    let bytes = b"hello";
    let _ = str::from_utf8(bytes);
}

#[allow(dead_code)]
fn test_cmp_operations() {
    let _ = 5.cmp(&10);
    let _ = 5.max(10);
    let _ = 5.min(10);
    let _ = 5.max(0).min(100);
}

#[allow(dead_code)]
fn test_range_operations() {
    let r = 0..10;
    let _ = r.contains(&5);
    let _ = (0..10).collect::<Vec<_>>();
    let _ = (0..=10).collect::<Vec<_>>();
    let _ = (0..).take(10).collect::<Vec<_>>();
}

#[allow(dead_code)]
fn test_panic_operations() {
    let _ = std::panic::catch_unwind(|| {
        panic!("test");
    });
    let _ = std::panic::catch_unwind(|| {
        panic!("formatted panic: {}", 42);
    });
}

#[allow(dead_code)]
fn test_debug_macros() {
    let x = 42;
    let _ = dbg!(x);
    let _ = dbg!(&x);

    assert!(true);
    assert_eq!(1, 1);
    assert_ne!(1, 2);
    assert!(true, "assertion with message");
    assert_eq!(1, 1, "assert_eq with message: {}", 42);
    assert_ne!(1, 2, "assert_ne with message: {}", 42);
}

#[allow(dead_code)]
fn test_format_types() {
    // Integer types
    let _ = format!("{}", 1i8);
    let _ = format!("{}", 1i16);
    let _ = format!("{}", 1i32);
    let _ = format!("{}", 1i64);
    let _ = format!("{}", 1i128);
    let _ = format!("{}", 1isize);
    let _ = format!("{}", 1u8);
    let _ = format!("{}", 1u16);
    let _ = format!("{}", 1u32);
    let _ = format!("{}", 1u64);
    let _ = format!("{}", 1u128);
    let _ = format!("{}", 1usize);

    // Float types
    let _ = format!("{}", 1.0f32);
    let _ = format!("{}", 1.0f64);
    let _ = format!("{:e}", 1.0f32);
    let _ = format!("{:E}", 1.0f64);

    // Bool and char
    let _ = format!("{}", true);
    let _ = format!("{}", false);
    let _ = format!("{}", 'a');

    // String and str
    let _ = format!("{}", "hello");
    let _ = format!("{}", String::from("world"));

    // Pointer formatting
    let x = 5;
    let _ = format!("{:p}", &x);

    // Width and precision
    let _ = format!("{:5}", 42);
    let _ = format!("{:05}", 42);
    let _ = format!("{:.2}", 3.14159);
    let _ = format!("{:8.2}", 3.14159);
}

#[allow(dead_code)]
fn test_env_operations() {
    let _ = std::env::args();
    let _ = std::env::vars();
    let _ = std::env::current_dir();
    let _ = std::env::current_exe();
    let _ = std::env::var("PATH");
    let _ = std::env::temp_dir();
}

#[allow(dead_code)]
fn test_process_operations() {
    let _ = std::process::id();
    let _ = std::process::Command::new("echo").arg("test");
}

fn main() {
    test_vec_operations();
    test_string_operations();
    test_hashmap_operations();
    test_hashset_operations();
    test_btreemap_operations();
    test_btreeset_operations();
    test_linkedlist_operations();
    test_vecdeque_operations();
    test_binaryheap_operations();
    test_rc_operations();
    test_arc_operations();
    test_cell_operations();
    test_refcell_operations();
    test_mutex_operations();
    test_rwlock_operations();
    test_thread_operations();
    let _ = test_io_operations();
    test_path_operations();
    test_time_operations();
    test_option_operations();
    test_result_operations();
    test_iterator_operations();
    test_slice_operations();
    test_mem_operations();
    test_ptr_operations();
    test_box_operations();
    test_conversion_operations();
    test_cmp_operations();
    test_range_operations();
    test_panic_operations();
    test_debug_macros();
    test_format_types();
    test_env_operations();
    test_process_operations();
}
