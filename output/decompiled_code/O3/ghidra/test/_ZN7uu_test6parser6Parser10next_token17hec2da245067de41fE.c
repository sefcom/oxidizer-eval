void __rustcall uu_test::parser::Parser::next_token(undefined8 param_1,long param_2)

{
  long lVar1;
  long local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0x8000000000000001;
  if (lVar1 == -0x7fffffffffffffff) {
    _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
              (&local_20,param_2 + 0x30);
  }
  else {
    local_18 = *(undefined4 *)(param_2 + 0x20);
    uStack_14 = *(undefined4 *)(param_2 + 0x24);
    uStack_10 = *(undefined4 *)(param_2 + 0x28);
    uStack_c = *(undefined4 *)(param_2 + 0x2c);
    local_20 = lVar1;
  }
  Symbol::new(param_1,&local_20);
  return;
}