void _ZN9alacritty7display6damage13DamageTracker16damage_vi_cursor17hbd6389ba644f4a2fE
               (int *param_1,int *param_2)

{
  _ZN4core10intrinsics25typed_swap_nonoverlapping17h0a04095f3d754e5fE();
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*param_1 == 1) {
      _ZN9alacritty7display6damage11FrameDamage12damage_point17h73fa5b91a33d4300E
                (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                 *(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4));
    }
    if (*param_2 == 1) {
      _ZN9alacritty7display6damage11FrameDamage12damage_point17h73fa5b91a33d4300E
                (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                 *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
      return;
    }
  }
  return;
}