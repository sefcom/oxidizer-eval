ulong _ZN6uu_yes6splice11splice_data17h72ae45c2ba61e376E
                (ulong param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  int local_e8;
  int local_e4;
  ulong local_e0;
  int local_d8;
  int local_d4;
  int *local_d0;
  ulong local_c8;
  int *local_c0;
  uint local_a8;
  
  _ZN3nix3sys4stat5fstat17h5414de4d70a08ddbE(&local_c8,*param_3);
  if ((int)local_c8 != 0) {
LAB_001a6626:
    return local_c8 & 0xffffffff00000000 | 2;
  }
  local_e0 = param_1;
  if ((local_a8 & 0x1000) == 0) {
    local_c8 = _ZN6uucore8features5pipes4pipe17h14b45b9735c770a8E();
    local_e8 = (int)local_c8;
    if (local_e8 == -1) goto LAB_001a6626;
    local_e4 = (int)(local_c8 >> 0x20);
    piVar5 = param_2;
    if (param_2 == (int *)0x0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    while( true ) {
                    /* try { // try from 001a668a to 001a66c3 has its CatchHandler @ 001a67c0 */
      local_c8 = param_1;
      local_c0 = piVar5;
      _ZN3nix5fcntl8vmsplice17hf0c74caef6c9626aE(&local_d8,&local_e4,&local_c8,1,0);
      piVar4 = local_d0;
      iVar1 = local_d4;
      if ((local_d8 != 0) ||
         (iVar1 = _ZN6uucore8features5pipes12splice_exact17hfc6bdd2da9251bd0E
                            (&local_e8,param_3,local_d0), iVar1 != 0x86)) {
        uVar3 = _ZN4core3ops8function6FnOnce9call_once17h6e25e053844151e6E(iVar1);
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hdc6e75f3ed259d90E(local_e4);
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hdc6e75f3ed259d90E(local_e8);
        return uVar3;
      }
      if (piVar5 < piVar4) break;
      piVar5 = (int *)((long)piVar5 - (long)piVar4);
      param_1 = param_1 + (long)piVar4;
      if (piVar5 == (int *)0x0) {
        piVar5 = param_2;
        param_1 = local_e0;
      }
    }
  }
  else {
    if (param_2 == (int *)0x0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    piVar5 = &local_d8;
    piVar4 = param_2;
    while( true ) {
      local_c8 = param_1;
      local_c0 = piVar4;
      _ZN3nix5fcntl8vmsplice17hebd5ee864fb7652aE(piVar5,param_3,&local_c8,1,0);
      if (local_d8 != 0) {
        uVar3 = _ZN4core3ops8function6FnOnce9call_once17h6e25e053844151e6E(local_d4);
        return uVar3;
      }
      if (piVar4 < local_d0) break;
      param_1 = param_1 + (long)local_d0;
      piVar4 = (int *)((long)piVar4 - (long)local_d0);
      if (piVar4 == (int *)0x0) {
        piVar4 = param_2;
        param_1 = local_e0;
      }
    }
    _ZN4core5slice5index26slice_start_index_len_fail17hff2ebd3969f5a2ecE
              (local_d0,piVar4,&PTR_s_src_uu_yes_src_splice_rs_00209b00);
  }
                    /* try { // try from 001a67ab to 001a67bd has its CatchHandler @ 001a67be */
  uVar2 = _ZN4core5slice5index26slice_start_index_len_fail17hff2ebd3969f5a2ecE
                    (piVar4,piVar5,&PTR_s_src_uu_yes_src_splice_rs_00209ae8);
                    /* catch() { ... } // from try @ 001a67ab with catch @ 001a67be */
                    /* catch() { ... } // from try @ 001a668a with catch @ 001a67c0 */
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hdc6e75f3ed259d90E(local_e4);
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hdc6e75f3ed259d90E(local_e8);
  uVar3 = _Unwind_Resume(uVar2);
  return uVar3;
}