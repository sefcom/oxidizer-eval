void *__fastcall rg::search::SearchWorkerBuilder::new(char *dest)
{
  __int128 v1; // xmm0
  __int128 v2; // xmm1
  __int128 v3; // xmm2
  void *result; // rax
  _OWORD v5[3]; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v6; // [rsp+38h] [rbp-A0h]
  _BYTE src[144]; // [rsp+48h] [rbp-90h] BYREF

  grep_cli::decompress::DecompressionReaderBuilder::new(v5);
  BYTE8(v6) = 1;
  <rg::search::Config as core::default::Default>::default(src);
  v1 = v5[0];
  v2 = v5[1];
  v3 = v5[2];
  *(_OWORD *)(dest + 184) = v6;
  *(_OWORD *)(dest + 168) = v3;
  *(_OWORD *)(dest + 152) = v2;
  *(_OWORD *)(dest + 136) = v1;
  result = memcpy(dest, src, 0x88uLL);
  dest[200] = 1;
  return result;
}