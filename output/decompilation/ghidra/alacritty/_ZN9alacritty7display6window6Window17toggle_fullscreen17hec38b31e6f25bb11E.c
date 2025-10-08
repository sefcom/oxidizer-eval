void _ZN9alacritty7display6window6Window17toggle_fullscreen17hec38b31e6f25bb11E(long param_1)

{
  long local_98 [18];
  
  _ZN5winit6window6Window10fullscreen17h7b514a63f78efc09E
            (local_98,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 00549a5f to 00549a66 has its CatchHandler @ 00549a78 */
  _ZN9alacritty7display6window6Window14set_fullscreen17h72faa300d5c80e9cE
            (param_1,local_98[0] == -0x7ffffffffffffffd);
  _ZN4core3ptr74drop_in_place_LT_core__option__Option_LT_winit__window__Fullscreen_GT__GT_17h179c0a3065004becE
            (local_98);
  return;
}