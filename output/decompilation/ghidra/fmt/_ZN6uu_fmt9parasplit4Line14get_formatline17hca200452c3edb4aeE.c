void _ZN6uu_fmt9parasplit4Line14get_formatline17hca200452c3edb4aeE(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (*param_2 != -0x8000000000000000) {
    param_1[6] = param_2[6];
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar3 = param_2[2];
    lVar4 = param_2[3];
    lVar5 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar5;
    param_1[2] = lVar3;
    param_1[3] = lVar4;
    *param_1 = lVar1;
    param_1[1] = lVar2;
    return;
  }
  local_40 = &PTR_s_Found_NoFormatLine_when_expectin_002265d0;
  local_38 = 1;
  local_30 = 8;
  local_28 = 0;
  uStack_20 = 0;
                    /* try { // try from 001b9635 to 001b9646 has its CatchHandler @ 001b9647 */
                    /* WARNING: Subroutine does not return */
  _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E
            (&local_40,&PTR_s_src_uu_fmt_src_parasplit_rs_002265e0);
}