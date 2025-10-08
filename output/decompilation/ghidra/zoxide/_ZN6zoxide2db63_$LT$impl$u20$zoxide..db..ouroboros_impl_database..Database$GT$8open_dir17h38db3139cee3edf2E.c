void _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_8open_dir17h38db3139cee3edf2E
               (undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined local_c0 [24];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined local_60 [48];
  
  uVar1 = param_2[1];
  auVar2 = _ZN3std4path95__LT_impl_u20_core__convert__AsRef_LT_std__path__Path_GT__u20_for_u20_alloc__string__String_GT_6as_ref17h38bd28293a94b618E
                     (uVar1,param_2[2]);
                    /* try { // try from 0019188d to 001918a6 has its CatchHandler @ 00191a98 */
  _ZN3std4path4Path4join17hb0fbf4f9ac9d7e75E(&local_d8,auVar2._0_8_,auVar2._8_8_,"db.zo",5);
                    /* try { // try from 001918a7 to 001918b5 has its CatchHandler @ 00191a84 */
  _ZN3std2fs12canonicalize17he51144e910f5569bE(local_c0,&local_d8);
  local_98 = local_c8;
  local_a8 = local_d8;
  uStack_a4 = uStack_d4;
  uStack_a0 = uStack_d0;
  uStack_9c = uStack_cc;
                    /* try { // try from 001918ca to 001918db has its CatchHandler @ 00191a82 */
  _ZN4core6result19Result_LT_T_C_E_GT_9unwrap_or17h62cab0fd48b9933eE(&local_f8,local_c0,&local_a8);
                    /* try { // try from 001918dc to 001918eb has its CatchHandler @ 00191a6f */
  _ZN3std2fs4read17heeb5edeae98c8192E(local_60,&local_f8);
  local_98 = local_e8;
  local_a8 = local_f8;
  uStack_a4 = uStack_f4;
  uStack_a0 = uStack_f0;
  uStack_9c = uStack_ec;
                    /* try { // try from 00191946 to 0019195a has its CatchHandler @ 00191a6d */
  _ZN6zoxide2db23ouroboros_impl_database8Database7try_new17h74a6396062d45fa8E
            (param_1,&local_a8,local_60);
  _ZN4core3mem4drop17h8efcdb4578edbe7fE(*param_2,uVar1);
  return;
}