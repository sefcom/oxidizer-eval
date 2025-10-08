void _ZN9alacritty8renderer5rects10RenderLine5rects17h3e1b797e248680e5E
               (undefined8 *param_1,ulong *param_2,undefined4 param_3,undefined8 param_4,
               long param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong *local_40;
  undefined8 *local_38;
  
  local_58 = 0;
  uStack_50 = 4;
  local_48 = 0;
  uVar4 = *param_2;
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  local_38 = param_1;
  if (uVar4 < uVar1) {
    lVar2 = *(long *)(param_5 + 8) + -1;
    uVar5 = (ulong)*(uint3 *)(param_2 + 4);
                    /* try { // try from 00562081 to 005620a3 has its CatchHandler @ 00562160 */
    local_40 = param_2;
    _ZN9alacritty8renderer5rects10RenderLine10push_rects17h98dca790795ed191E
              (&local_58,param_4,param_5,param_3,uVar4,uVar3,lVar2,uVar5);
    uVar3 = uVar4 + 1;
    uVar4 = uVar1;
    if (uVar3 == uVar1) {
      uVar3 = 0;
      param_2 = local_40;
    }
    else {
      do {
                    /* try { // try from 005620e0 to 005620ff has its CatchHandler @ 00562164 */
        _ZN9alacritty8renderer5rects10RenderLine10push_rects17h98dca790795ed191E
                  (&local_58,param_4,param_5,param_3,uVar3,0,lVar2,uVar5);
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
      uVar3 = 0;
      param_2 = local_40;
    }
  }
  else {
    uVar5 = (ulong)*(uint3 *)(param_2 + 4);
  }
                    /* try { // try from 0056211d to 0056213a has its CatchHandler @ 00562162 */
  _ZN9alacritty8renderer5rects10RenderLine10push_rects17h98dca790795ed191E
            (&local_58,param_4,param_5,param_3,uVar4,uVar3,param_2[3],uVar5);
  local_38[2] = local_48;
  *local_38 = local_58;
  local_38[1] = uStack_50;
  return;
}