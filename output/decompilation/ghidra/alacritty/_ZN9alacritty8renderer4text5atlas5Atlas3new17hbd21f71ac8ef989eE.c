void _ZN9alacritty8renderer4text5atlas5Atlas3new17hbd21f71ac8ef989eE
               (undefined4 *param_1,undefined param_2)

{
  uint in_EAX;
  undefined8 uStack_18;
  
  uStack_18 = (ulong)in_EAX;
  (*(code *)_ZN9alacritty2gl7storage11PixelStorei17h029e209348732b59E_0)(0xcf5,1);
  (*(code *)_ZN9alacritty2gl7storage11GenTextures17hb4d686c2057792adE_0)(1,(long)&uStack_18 + 4);
  (*(code *)_ZN9alacritty2gl7storage11BindTexture17h1bc957198888829cE_0)(0xde1,uStack_18._4_4_);
  (*(code *)_ZN9alacritty2gl7storage10TexImage2D17hb16e57e790040cbcE_0)
            (0xde1,0,0x1908,0x400,0x400,0,0x1908,0x1401,0);
  (*(code *)_ZN9alacritty2gl7storage13TexParameteri17h196cf479b623bb16E_0)(0xde1,0x2802,0x812f);
  (*(code *)_ZN9alacritty2gl7storage13TexParameteri17h196cf479b623bb16E_0)(0xde1,0x2803,0x812f);
  (*(code *)_ZN9alacritty2gl7storage13TexParameteri17h196cf479b623bb16E_0)(0xde1,0x2801,0x2601);
  (*(code *)_ZN9alacritty2gl7storage13TexParameteri17h196cf479b623bb16E_0)(0xde1,0x2800,0x2601);
  (*(code *)_ZN9alacritty2gl7storage11BindTexture17h1bc957198888829cE_0)(0xde1,0);
  *param_1 = uStack_18._4_4_;
  *(undefined8 *)(param_1 + 1) = DAT_001e8650;
  *(undefined8 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  *(undefined *)(param_1 + 6) = param_2;
  return;
}