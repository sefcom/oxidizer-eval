void _ZN9alacritty7display3Ime11set_enabled17haa2217e684d43de8E(undefined8 *param_1,int param_2)

{
  if (param_2 == 0) {
    _ZN4core3ptr44drop_in_place_LT_alacritty__display__Ime_GT_17he516603905b647f6E(param_1);
    *param_1 = 2;
  }
  *(bool *)(param_1 + 9) = param_2 != 0;
  return;
}