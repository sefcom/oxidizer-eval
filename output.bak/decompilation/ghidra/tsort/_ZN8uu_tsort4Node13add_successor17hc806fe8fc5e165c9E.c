void __rustcall uu_tsort::Node::add_successor(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[2];
  if (lVar1 == *param_1) {
    ::alloc::raw_vec::RawVec<T,A>::grow_one(param_1);
  }
  lVar2 = param_1[1];
  *(undefined8 *)(lVar2 + lVar1 * 0x10) = param_2;
  *(undefined8 *)(lVar2 + 8 + lVar1 * 0x10) = param_3;
  param_1[2] = lVar1 + 1;
  return;
}