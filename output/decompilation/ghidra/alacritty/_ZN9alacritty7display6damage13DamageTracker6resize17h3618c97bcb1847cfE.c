void _ZN9alacritty7display6damage13DamageTracker6resize17h3618c97bcb1847cfE
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  _ZN9alacritty7display6damage11FrameDamage5reset17hc5350e11c260da59E(param_1 + 0x18);
  _ZN9alacritty7display6damage11FrameDamage5reset17hc5350e11c260da59E
            (param_1 + 0x50,param_2,param_3);
  *(undefined *)(param_1 + 0x48) = 1;
  return;
}