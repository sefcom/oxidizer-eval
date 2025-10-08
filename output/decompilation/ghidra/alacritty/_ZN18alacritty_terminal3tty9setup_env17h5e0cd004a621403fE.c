void _ZN18alacritty_terminal3tty9setup_env17h5e0cd004a621403fE(void)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  cVar1 = _ZN18alacritty_terminal3tty15terminfo_exists17hb036c6d2702b0611E();
  if (cVar1 == '\0') {
    pcVar3 = "xterm-256color";
    uVar2 = 0xe;
  }
  else {
    pcVar3 = "alacritty";
    uVar2 = 9;
  }
  _ZN3std3env7set_var17he01157999e9e4f1eE("TERM => M",4,pcVar3,uVar2);
  _ZN3std3env7set_var17he01157999e9e4f1eE("COLORTERM",9,"truecolor",9);
  return;
}