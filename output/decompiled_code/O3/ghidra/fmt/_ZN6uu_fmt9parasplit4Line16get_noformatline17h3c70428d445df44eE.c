void __rustcall uu_fmt::parasplit::Line::get_noformatline(long *param_1,long *param_2)

{
  long lVar1;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (*param_2 == -0x8000000000000000) {
    param_1[2] = param_2[3];
    lVar1 = param_2[2];
    *param_1 = param_2[1];
    param_1[1] = lVar1;
    *(undefined *)(param_1 + 3) = *(undefined *)(param_2 + 4);
    return;
  }
  local_40 = &PTR_s_Found_FormatLine_when_expecting_N_002278e8;
  local_38 = 1;
  local_30 = 8;
  local_28 = 0;
  uStack_20 = 0;
                    /* try { // try from 001b9b9d to 001b9bae has its CatchHandler @ 001b9baf */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&local_40,&PTR_s_src_uu_fmt_src_parasplit_rs_002278f8);
}