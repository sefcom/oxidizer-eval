void _ZN5uu_dd11BlockWriter12write_blocks17h4171594e3d4f7075E(undefined8 param_1,long *param_2)

{
  if (*param_2 == -0x8000000000000000) {
    _ZN5uu_dd6Output12write_blocks17h78b56ae9a3f355f3E(param_1,param_2 + 1);
    return;
  }
  _ZN5uu_dd14bufferedoutput14BufferedOutput12write_blocks17h650a144b171239b2E();
  return;
}