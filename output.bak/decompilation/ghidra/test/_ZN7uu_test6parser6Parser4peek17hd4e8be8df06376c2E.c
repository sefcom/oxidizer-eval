void __rustcall uu_test::parser::Parser::peek(undefined8 param_1,long param_2)

{
  undefined8 local_38 [3];
  
  core::option::Option<T>::get_or_insert_with(param_2 + 0x18,param_2 + 0x30);
  if (*(long *)(param_2 + 0x18) == -0x8000000000000000) {
    local_38[0] = 0x8000000000000000;
  }
  else {
    _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(local_38,param_2 + 0x18);
  }
  Symbol::new(param_1,local_38);
  return;
}