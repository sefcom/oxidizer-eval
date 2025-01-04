void __rustcall
uu_sort::ext_sort::write_lines(long param_1,long param_2,undefined8 param_3,undefined param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined local_41;
  long local_40;
  long local_38;
  
  local_38 = param_1 + param_2 * 0x18;
  local_40 = param_1;
  puVar1 = (undefined8 *)
           _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    do {
      uVar2 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all
                        (param_3,*puVar1,puVar1[1]);
      core::result::Result<T,E>::unwrap(uVar2,&PTR_s_src_uu_sort_src_ext_sort_rs_00301e88);
      local_41 = param_4;
      uVar2 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all
                        (param_3,&local_41,1);
      core::result::Result<T,E>::unwrap(uVar2,&PTR_s_src_uu_sort_src_ext_sort_rs_00301ea0);
      puVar1 = (undefined8 *)
               _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_40);
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}