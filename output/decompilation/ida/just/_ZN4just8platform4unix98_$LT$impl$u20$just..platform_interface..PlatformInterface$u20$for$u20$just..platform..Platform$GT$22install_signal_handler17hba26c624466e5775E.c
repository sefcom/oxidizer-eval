__int64 __fastcall just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::install_signal_handler(
        __int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebp
  int v3; // ecx
  __int64 v4; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v5; // [rsp+8h] [rbp-F0h]
  __int64 v6; // [rsp+18h] [rbp-E0h] BYREF
  __int128 v7; // [rsp+20h] [rbp-D8h]
  __int128 v8; // [rsp+30h] [rbp-C8h]
  __int128 v9; // [rsp+40h] [rbp-B8h]
  __int128 v10; // [rsp+50h] [rbp-A8h]
  __int128 v11; // [rsp+60h] [rbp-98h]
  __int128 v12; // [rsp+70h] [rbp-88h]
  __int128 v13; // [rsp+80h] [rbp-78h] BYREF
  __int64 v14; // [rsp+90h] [rbp-68h]
  __int64 v15; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+A8h] [rbp-50h]
  __int128 v17; // [rsp+B8h] [rbp-40h] BYREF
  __int64 v18; // [rsp+C8h] [rbp-30h]

  just::signals::Signals::new(&v6);
  result = (unsigned __int8)v6;
  if ( (_BYTE)v6 == 56 )
  {
    v2 = HIDWORD(v6);
    *((_QWORD *)&v7 + 1) = 0x8000000000000000LL;
    v6 = 0LL;
    LOBYTE(v9) = 0;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v17, aSignalHandler);
    v14 = v18;
    v13 = v17;
    std::thread::Builder::name(&v17, &v6, &v13);
    std::thread::Builder::spawn_unchecked(&v4, &v17, v2);
    if ( v4 )
    {
      v16 = v5;
      v15 = v4;
      result = core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v15);
      *(_BYTE *)a1 = 56;
    }
    else
    {
      result = v5;
      *(_BYTE *)a1 = 47;
      *(_QWORD *)(a1 + 8) = result;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 3) = BYTE3(v6);
    *(_WORD *)(a1 + 1) = *(_WORD *)((char *)&v6 + 1);
    v3 = HIDWORD(v6);
    *(_OWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 40) = v9;
    *(_OWORD *)(a1 + 56) = v10;
    *(_OWORD *)(a1 + 72) = v11;
    *(_OWORD *)(a1 + 88) = v12;
    *(_OWORD *)(a1 + 8) = v7;
    *(_BYTE *)a1 = result;
    *(_DWORD *)(a1 + 4) = v3;
  }
  return result;
}