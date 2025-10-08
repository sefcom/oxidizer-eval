void _ZN9alacritty7display6window6Window19update_ime_position17h9e6fbf55ca260375E
               (long param_1,long param_2,ulong param_3,long param_4)

{
  double dVar1;
  
  dVar1 = (double)*(float *)(param_4 + 0x18);
  _ZN5winit6window6Window19set_ime_cursor_area17h23d6b176b0686c7cE
            ((double)((float)param_3 * *(float *)(param_4 + 0x18) + *(float *)(param_4 + 0x20)),
             (double)((float)(param_2 + (ulong)*(byte *)(param_1 + 0xf3)) *
                      *(float *)(param_4 + 0x1c) + *(float *)(param_4 + 0x24)),dVar1 + dVar1,
             (double)*(float *)(param_4 + 0x1c),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}