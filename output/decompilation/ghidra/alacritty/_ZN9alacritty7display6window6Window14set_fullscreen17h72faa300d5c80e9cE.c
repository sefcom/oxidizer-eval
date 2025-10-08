void _ZN9alacritty7display6window6Window14set_fullscreen17h72faa300d5c80e9cE
               (long param_1,int param_2)

{
  undefined8 local_90;
  undefined8 local_88;
  
  if (param_2 != 0) {
    local_90 = 0x8000000000000002;
    local_88 = 0x8000000000000001;
    _ZN5winit6window6Window14set_fullscreen17h887106e44b0d2168E(param_1 + 0x20,&local_90);
    return;
  }
  local_90 = 0x8000000000000003;
  _ZN5winit6window6Window14set_fullscreen17h887106e44b0d2168E(param_1 + 0x20,&local_90);
  return;
}