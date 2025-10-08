void _ZN8uu_paste14DelimiterState25remove_trailing_delimiter17h00dfcc6c7a63cba7E
               (long param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  ulong local_38 [7];
  
  if (param_2 != 0 && param_1 != 0) {
    local_38[0] = *(ulong *)(param_3 + 0x10);
    if (param_2 <= local_38[0]) {
      *(ulong *)(param_3 + 0x10) = local_38[0] - param_2;
      return;
    }
    if (local_38[0] != 0) {
      local_38[1] = 0;
      (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_001e5418)
                (0,local_38,"",local_38 + 1,&PTR_s_src_uu_paste_src_paste_rs_001deda0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}