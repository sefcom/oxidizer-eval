void _ZN9alacritty8renderer8Renderer10draw_cells17h5347c3ae71373743E
               (int *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_10;
  
  local_18 = param_3;
  local_10 = param_2;
  if (*param_1 == 1) {
    local_58 = *param_4;
    uStack_50 = param_4[1];
    local_48 = param_4[2];
    uStack_40 = param_4[3];
    local_38 = *(undefined4 *)(param_4 + 4);
    uStack_34 = *(undefined4 *)((long)param_4 + 0x24);
    uStack_30 = *(undefined4 *)(param_4 + 5);
    uStack_2c = *(undefined4 *)((long)param_4 + 0x2c);
    local_28 = *(undefined4 *)(param_4 + 6);
    uStack_24 = *(undefined4 *)((long)param_4 + 0x34);
    uStack_20 = *(undefined4 *)(param_4 + 7);
    uStack_1c = *(undefined4 *)((long)param_4 + 0x3c);
    _ZN107__LT_alacritty__renderer__text__glsl3__Glsl3Renderer_u20_as_u20_alacritty__renderer__text__TextRenderer_GT_8with_api17h0914d331dc3203caE
              (*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),param_1 + 2,&local_58
              );
    return;
  }
  local_58 = *param_4;
  uStack_50 = param_4[1];
  local_48 = param_4[2];
  uStack_40 = param_4[3];
  local_38 = *(undefined4 *)(param_4 + 4);
  uStack_34 = *(undefined4 *)((long)param_4 + 0x24);
  uStack_30 = *(undefined4 *)(param_4 + 5);
  uStack_2c = *(undefined4 *)((long)param_4 + 0x2c);
  local_28 = *(undefined4 *)(param_4 + 6);
  uStack_24 = *(undefined4 *)((long)param_4 + 0x34);
  uStack_20 = *(undefined4 *)(param_4 + 7);
  uStack_1c = *(undefined4 *)((long)param_4 + 0x3c);
  _ZN107__LT_alacritty__renderer__text__gles2__Gles2Renderer_u20_as_u20_alacritty__renderer__text__TextRenderer_GT_8with_api17ha40c94eaaab45314E
            (param_1 + 2,&local_58);
  return;
}