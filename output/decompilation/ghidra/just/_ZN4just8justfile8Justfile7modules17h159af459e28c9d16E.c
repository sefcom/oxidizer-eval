void _ZN4just8justfile8Justfile7modules17h159af459e28c9d16E
               (undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulong local_60 [3];
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  
  local_60[2] = *(long *)(param_2 + 0x2a0);
  local_48 = *(undefined8 *)(param_2 + 0x2a8);
  local_60[0] = (ulong)(local_60[2] != 0);
  local_20 = local_60[2];
  if (local_60[2] != 0) {
    local_20 = *(long *)(param_2 + 0x2b0);
  }
  local_60[1] = 0;
  local_38 = 0;
  local_40 = local_60[0];
  local_30 = local_60[2];
  local_28 = local_48;
  _ZN4core4iter6traits8iterator8Iterator7collect17h7184a08076d67673E(&local_78,local_60);
  if ((param_3 & 1) != 0) {
                    /* try { // try from 0036ff21 to 0036ff28 has its CatchHandler @ 0036ff42 */
    _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_11sort_by_key17h0e916841b04bbcbbE
              (uStack_70,local_68);
  }
  param_1[2] = local_68;
  *param_1 = local_78;
  param_1[1] = uStack_70;
  return;
}