ulong _ZN5uu_mv12is_empty_dir17he3f2d58304cc65e8E(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBX;
  ulong uVar1;
  long local_58;
  char local_50;
  long local_48 [6];
  long local_18;
  char local_10;
  
  _ZN3std2fs8read_dir17hac14a9f3c8669bd0E(&local_58,param_1,param_2);
  if (local_50 == '\x02') {
    local_48[0] = local_58;
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hbb55e5b4020a58baE(local_48);
    uVar1 = 0;
  }
  else {
    local_18 = local_58;
    local_10 = local_50;
    local_48[0] = 2;
                    /* try { // try from 001ebfbe to 001ebfc7 has its CatchHandler @ 001ebfe3 */
    _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h2664734a8f2b2304E(local_48,&local_18);
    uVar1 = CONCAT71((int7)((ulong)unaff_RBX >> 8),local_48[0] == 0);
    _ZN4core3ptr85drop_in_place_LT_core__iter__adapters__peekable__Peekable_LT_std__fs__ReadDir_GT__GT_17h4d32aa70b54d5e21E
              (local_48);
  }
  return uVar1 & 0xffffffff;
}