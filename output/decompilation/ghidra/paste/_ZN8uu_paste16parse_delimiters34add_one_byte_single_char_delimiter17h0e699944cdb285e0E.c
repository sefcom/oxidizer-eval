void __rustcall
uu_paste::parse_delimiters::add_one_byte_single_char_delimiter
          (undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = ::alloc::boxed::Box<T>::new(param_2);
  ::alloc::vec::Vec<T,A>::push(param_1,uVar1,1);
  return;
}