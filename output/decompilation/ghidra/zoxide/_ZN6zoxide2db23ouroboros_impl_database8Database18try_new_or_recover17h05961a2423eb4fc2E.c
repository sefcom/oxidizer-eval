void _ZN6zoxide2db23ouroboros_impl_database8Database18try_new_or_recover17h05961a2423eb4fc2E
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
                    /* try { // try from 00197fc1 to 00197fc8 has its CatchHandler @ 00198090 */
  lVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha23b455cb50264e0E(param_3);
                    /* try { // try from 00197fd4 to 00197fdd has its CatchHandler @ 00198083 */
  _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_8open_dir28__u7b__u7b_closure_u7d__u7d_17he9f52b07fb200152E
            (&local_80,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
  uVar1 = param_2[2];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  param_1[1] = local_80;
  param_1[2] = uStack_78;
  param_1[3] = local_70;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar1;
  param_1[7] = lVar4;
  *(undefined *)(param_1 + 8) = 0;
  *param_1 = 0;
  return;
}