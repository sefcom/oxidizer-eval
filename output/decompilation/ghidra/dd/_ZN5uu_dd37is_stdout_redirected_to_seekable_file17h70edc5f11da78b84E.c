bool _ZN5uu_dd37is_stdout_redirected_to_seekable_file17h70edc5f11da78b84E(void)

{
  long lVar1;
  bool bVar2;
  undefined auVar3 [16];
  int local_54;
  undefined local_50 [16];
  int local_40;
  int local_3c;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  _ZN5uu_dd20stdout_canonicalized17hef58783e4e0e6ebaE(&local_30);
                    /* try { // try from 00191ebc to 00191eda has its CatchHandler @ 00191f94 */
  _ZN3std2fs4File4open17h6f8eb2428e586d07E(&local_40,local_28,local_20);
  if (local_40 != 0) {
    _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h92b93fa98429e7c9E
              (&local_40);
    bVar2 = false;
    goto LAB_00191f4d;
  }
  local_54 = local_3c;
                    /* try { // try from 00191ee7 to 00191f8a has its CatchHandler @ 00191f99 */
  local_50 = (*(code *)
               PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_15stream_position17hea3f1471eccd6c38E_00246d18
             )(&local_54);
  if (local_50._0_8_ == 0) {
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h84bdf3d577fad3a7E
              (local_50);
    auVar3 = (*(code *)
               PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17h04cf64217ea00d1dE_002469d8
             )(&local_54,1,0);
    local_50 = auVar3;
    if (auVar3._0_8_ != 0) {
      _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h84bdf3d577fad3a7E
                (local_50);
      goto LAB_00191f42;
    }
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h84bdf3d577fad3a7E
              (local_50);
    lVar1 = _ZN3std2io4Seek6rewind17h4f5eb59316fec924E(&local_54);
    local_50._0_8_ = lVar1;
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc7a03f57d9b19cc5E
              (local_50);
    bVar2 = lVar1 == 0;
  }
  else {
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h84bdf3d577fad3a7E
              (local_50);
LAB_00191f42:
    bVar2 = false;
  }
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h2ff6435789191b84E(local_54);
LAB_00191f4d:
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9ec2bf852da89cb7E
            (local_30,local_28);
  return bVar2;
}