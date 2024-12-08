__int64 __fastcall uu_wc::word_count_from_reader_specialized(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // dl
  __int64 v4; // rdx
  __int128 v5; // xmm0
  __int128 v6; // xmm0
  char v8; // [rsp+Fh] [rbp-99h] BYREF
  __int64 v9; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-90h]
  __int64 v11; // [rsp+20h] [rbp-88h]
  int v12; // [rsp+28h] [rbp-80h]
  char v13; // [rsp+2Ch] [rbp-7Ch]
  __int128 v14; // [rsp+30h] [rbp-78h] BYREF
  __int128 v15; // [rsp+40h] [rbp-68h]
  __int64 v16; // [rsp+50h] [rbp-58h]
  unsigned __int64 v17; // [rsp+58h] [rbp-50h] BYREF
  __int64 v18; // [rsp+60h] [rbp-48h] BYREF
  __int64 v19; // [rsp+68h] [rbp-40h]
  __int64 v20; // [rsp+70h] [rbp-38h]

  v15 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  v9 = <std::io::stdio::StdinLock as uu_wc::countable::WordCountable>::buffered(a2, a3);
  LOBYTE(v10) = v3 & 1;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v8 = 0;
  v17 = 0LL;
  while ( 1 )
  {
    uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v18, &v9);
    if ( v18 == 2 )
      break;
    v4 = v20;
    if ( v18 )
    {
      if ( v19 )
      {
        *(_QWORD *)&v14 = v20 + v14;
      }
      else if ( v20 )
      {
        *(_QWORD *)(a1 + 32) = v16;
        v5 = v14;
        *(_OWORD *)(a1 + 16) = v15;
        *(_OWORD *)a1 = v5;
        *(_QWORD *)(a1 + 40) = v4;
        return core::ptr::drop_in_place<uu_wc::utf8::read::BufReadDecoder<std::io::stdio::StdinLock>>(v9, v10);
      }
    }
    else
    {
      uu_wc::process_chunk(&v14, v19, v20, &v17, &v8);
    }
  }
  core::ptr::drop_in_place<core::option::Option<core::result::Result<&str,uu_wc::utf8::read::BufReadDecoderError>>>(&v18);
  *(_QWORD *)(a1 + 32) = v16;
  v6 = v14;
  *(_OWORD *)(a1 + 16) = v15;
  *(_OWORD *)a1 = v6;
  *(_QWORD *)(a1 + 40) = 0LL;
  return core::ptr::drop_in_place<uu_wc::utf8::read::BufReadDecoder<std::io::stdio::StdinLock>>(v9, v10);
}
