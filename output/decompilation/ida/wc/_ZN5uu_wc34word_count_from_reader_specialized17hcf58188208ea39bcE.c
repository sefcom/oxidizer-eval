__int64 __fastcall uu_wc::word_count_from_reader_specialized(__int64 a1)
{
  _BYTE *v1; // rsi
  __int64 v2; // rdx
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  char v6; // [rsp+Fh] [rbp-B9h] BYREF
  __int128 v7; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v8; // [rsp+20h] [rbp-A8h]
  __int64 v9; // [rsp+30h] [rbp-98h]
  unsigned __int64 v10; // [rsp+38h] [rbp-90h] BYREF
  __int64 v11; // [rsp+40h] [rbp-88h] BYREF
  _BYTE *v12; // [rsp+48h] [rbp-80h]
  __int64 v13; // [rsp+50h] [rbp-78h]
  _BYTE v14[48]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v15; // [rsp+88h] [rbp-40h]
  int v16; // [rsp+90h] [rbp-38h]
  char v17; // [rsp+94h] [rbp-34h]

  v8 = 0LL;
  v7 = 0LL;
  v9 = 0LL;
  <std::fs::File as uu_wc::countable::WordCountable>::buffered(v14);
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v6 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    v1 = v14;
    uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v11, (__int64)v14);
    if ( v11 == 2 )
      break;
    v1 = v12;
    v2 = v13;
    if ( v11 )
    {
      if ( v12 )
      {
        *(_QWORD *)&v7 = v13 + v7;
      }
      else if ( v13 )
      {
        *(_QWORD *)(a1 + 32) = v9;
        v3 = v7;
        *(_OWORD *)(a1 + 16) = v8;
        *(_OWORD *)a1 = v3;
        *(_QWORD *)(a1 + 40) = v2;
        return core::ptr::drop_in_place<uu_wc::utf8::read::BufReadDecoder<std::io::buffered::bufreader::BufReader<std::fs::File>>>(
                 v14,
                 v1);
      }
    }
    else
    {
      uu_wc::process_chunk(&v7, (__int64)v12, v13, &v10, &v6);
    }
  }
  core::ptr::drop_in_place<core::option::Option<core::result::Result<&str,uu_wc::utf8::read::BufReadDecoderError>>>(&v11);
  *(_QWORD *)(a1 + 32) = v9;
  v4 = v7;
  *(_OWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v4;
  *(_QWORD *)(a1 + 40) = 0LL;
  return core::ptr::drop_in_place<uu_wc::utf8::read::BufReadDecoder<std::io::buffered::bufreader::BufReader<std::fs::File>>>(
           v14,
           v1);
}
