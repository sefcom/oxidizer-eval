void _ZN9alacritty2gl19VertexAttribDivisor9load_with17h0d70f376363d42c5E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttribDivisor",0x15,
                              &PTR_s_glVertexAttribDivisorANGLEglVert_00986d60,4);
  _ZN9alacritty2gl7storage19VertexAttribDivisor17hbde0698143c4a369E_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage19VertexAttribDivisor17hbde0698143c4a369E_0 = pcVar1;
  }
  return;
}