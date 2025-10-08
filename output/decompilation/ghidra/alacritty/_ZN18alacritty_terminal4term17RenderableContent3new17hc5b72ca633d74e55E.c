void _ZN18alacritty_terminal4term17RenderableContent3new17hc5b72ca633d74e55E
               (undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_38;
  undefined7 uStack_37;
  
  lVar7 = *(long *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  uVar3 = *(undefined8 *)(param_2 + 200);
  _ZN18alacritty_terminal4term16RenderableCursor3new17h18d857dbc051652bE(&local_70);
  if (*(char *)(param_2 + 0x280) == '\x02') {
    local_38 = 2;
  }
  else {
    _ZN18alacritty_terminal9selection9Selection8to_range17h2a26a8fa10c1a05cE
              (&local_58,param_2 + 600,param_2);
  }
  uVar6 = ~(uint)uVar3;
  iVar4 = (int)uVar2;
  uVar5 = _ZN4core3cmp3Ord3min17h08e004ced85b11ebE(iVar4 + uVar6,iVar4 + -1);
  lVar7 = lVar7 + -1;
  uVar1 = *(undefined4 *)(param_2 + 0x6dc);
  param_1[1] = param_2 + 0x28;
  param_1[2] = lVar7;
  *(uint *)(param_1 + 3) = uVar6;
  param_1[4] = lVar7;
  *(undefined4 *)(param_1 + 5) = uVar5;
  param_1[0xc] = local_48;
  param_1[0xd] = uStack_40;
  param_1[0xe] = CONCAT71(uStack_37,local_38);
  param_1[10] = local_58;
  param_1[0xb] = uStack_50;
  param_1[7] = local_70;
  param_1[8] = uStack_68;
  param_1[9] = local_60;
  *param_1 = uVar3;
  param_1[6] = param_2 + 0x2a8;
  *(undefined4 *)(param_1 + 0xf) = uVar1;
  return;
}