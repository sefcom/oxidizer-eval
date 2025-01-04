void __rustcall uu_sort::Line::print(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 uStack_18;
  
  if (*(char *)(param_3 + 0x7c) != '\0') {
    uVar1 = print_debug(*param_1,param_1[1],param_3,param_2);
    core::result::Result<T,E>::unwrap(uVar1,&PTR_s_src_uu_sort_src_sort_rs_002ff8d8);
    return;
  }
  uStack_18 = in_RAX;
  uVar1 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all
                    (param_2,*param_1,param_1[1]);
  core::result::Result<T,E>::unwrap(uVar1,&PTR_s_src_uu_sort_src_sort_rs_002ff8a8);
  uStack_18 = CONCAT17(*(undefined *)(param_3 + 0x99),(undefined7)uStack_18);
  uVar1 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all
                    (param_2,(long)&uStack_18 + 7,1);
  core::result::Result<T,E>::unwrap(uVar1,&PTR_s_src_uu_sort_src_sort_rs_002ff8c0);
  return;
}