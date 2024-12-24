undefined8 __rustcall uu_mv::parse_paths(undefined8 param_1,long param_2,long param_3,char param_4)

{
  undefined8 uVar1;
  
  if (param_4 == '\0') {
    uVar1 = _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter();
    return uVar1;
  }
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
            (param_1,param_2,param_2 + param_3 * 0x18);
  return param_1;
}