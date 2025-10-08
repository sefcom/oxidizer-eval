void _ZN18alacritty_terminal4term13Term_LT_T_GT_6damage17h1bcd4e535a5188a6E
               (undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((*(byte *)(param_2 + 0x6dd) & 4) == 0) {
    lVar3 = *(long *)(param_2 + 0x58);
    lVar4 = *(long *)(param_2 + 0x200);
    iVar1 = *(int *)(param_2 + 0x60);
    iVar2 = *(int *)(param_2 + 0x208);
    *(long *)(param_2 + 0x200) = lVar3;
    *(int *)(param_2 + 0x208) = iVar1;
    if ((*(byte *)(param_2 + 0x210) & 1) == 0) {
      if (lVar3 == lVar4 && iVar1 == iVar2) {
        uVar5 = *(undefined8 *)(param_2 + 0x1f0);
        uVar6 = *(undefined8 *)(param_2 + 0x1f8);
      }
      else {
        uVar5 = *(undefined8 *)(param_2 + 0x1f0);
        uVar6 = *(undefined8 *)(param_2 + 0x1f8);
        _ZN18alacritty_terminal4term15TermDamageState11damage_line17h741c479e22cc411bE
                  (uVar5,uVar6,(long)iVar2,lVar4,lVar4);
      }
      _ZN18alacritty_terminal4term15TermDamageState11damage_line17h741c479e22cc411bE
                (uVar5,uVar6,(long)iVar1,lVar3,lVar3);
      (*(code *)
        PTR__ZN18alacritty_terminal4term18TermDamageIterator3new17h9c507061ce1d7d92E_009de598)
                (param_1,uVar5,uVar6,*(undefined8 *)(param_2 + 200));
      return;
    }
  }
  else {
    *(undefined *)(param_2 + 0x210) = 1;
    *(undefined8 *)(param_2 + 0x200) = *(undefined8 *)(param_2 + 0x58);
    *(undefined4 *)(param_2 + 0x208) = *(undefined4 *)(param_2 + 0x60);
  }
  *param_1 = 0;
  return;
}