void _ZN6zoxide2db23ouroboros_impl_database8Database3new17hea6bb27ef095d44cE
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 00197ecf to 00197ed6 has its CatchHandler @ 00197f28 */
  uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha23b455cb50264e0E(param_3);
  _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_8open_dir28__u7b__u7b_closure_u7d__u7d_17h112864392c34b041E
            (&local_48);
  uVar1 = param_2[2];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  param_1[2] = uStack_38;
  param_1[3] = uVar2;
  param_1[6] = uVar4;
  *(undefined *)(param_1 + 7) = 0;
  return;
}