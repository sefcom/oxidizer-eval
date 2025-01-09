long __rustcall
uu_truncate::truncate_reference_file_only
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined param_5)

{
  long lVar1;
  long local_d8;
  long local_d0;
  undefined8 local_88;
  
  std::fs::metadata(&local_d8,param_1,param_2);
  if ((int)local_d8 == 2) {
    lVar1 = truncate_reference_file_only::___closure__(param_1,param_2,local_d0);
  }
  else {
    local_d0 = param_3 + param_4 * 0x18;
    local_d8 = param_3;
    do {
      lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_d8);
      if (lVar1 == 0) {
        return 0;
      }
      lVar1 = file_truncate(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10),param_5,
                            local_88);
    } while (lVar1 == 0);
  }
  return lVar1;
}