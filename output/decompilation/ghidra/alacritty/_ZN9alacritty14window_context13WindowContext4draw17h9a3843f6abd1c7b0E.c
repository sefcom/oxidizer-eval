void _ZN9alacritty14window_context13WindowContext4draw17h9a3843f6abd1c7b0E
               (long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  
  *(undefined *)(param_1 + 0x1581) = 0;
  if (*(char *)(param_1 + 0x1e3a) != '\0') {
    return;
  }
  *(undefined *)(param_1 + 0x1e38) = 0;
  _ZN9alacritty7display7Display23process_renderer_update17h58ae5b395e4b889aE(param_1 + 0x1170);
  cVar1 = _ZN9alacritty7display4bell10VisualBell9completed17h1ddd2d81d136d29eE(param_1 + 0x1710);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x1580) == '\0') {
      *(undefined *)(param_1 + 0x1e38) = 1;
    }
    else if (*(char *)(param_1 + 0x1581) == '\0') {
      *(undefined *)(param_1 + 0x1581) = 1;
      _ZN5winit6window6Window14request_redraw17h03824d2d23a334d5E(param_1 + 0x14b0);
    }
  }
  lVar2 = *(long *)(param_1 + 0x1e18) + 0x10;
  _ZN18alacritty_terminal4sync18FairMutex_LT_T_GT_4lock17h8771cda87d96e8b1E(lVar2);
  _ZN9alacritty7display7Display4draw17hb8d142242f69117dE
            (param_1 + 0x1170,lVar2,param_2,param_1 + 0x1cd0,*(long *)(param_1 + 0x1e20) + 0x10,
             param_1);
  return;
}