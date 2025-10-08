void _ZN9alacritty11message_bar7Message8pad_text17ha652db38986a3243E
               (undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined local_30 [24];
  
                    /* try { // try from 0055e65d to 0055e681 has its CatchHandler @ 0055e69b */
  uVar2 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                    (param_2[1],param_2[2] + param_2[1]);
  lVar3 = 0;
  if (uVar2 <= param_3) {
    lVar3 = param_3 - uVar2;
  }
  _ZN62__LT_T_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h4e14528b5566b325E
            (local_30,lVar3);
  _ZN89__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__Extend_LT_char_GT__GT_6extend17h51d11e0496b22872E
            (param_2,local_30);
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}