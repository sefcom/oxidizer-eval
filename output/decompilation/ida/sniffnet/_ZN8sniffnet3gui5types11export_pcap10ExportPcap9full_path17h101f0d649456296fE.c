__int64 __fastcall sniffnet::gui::types::export_pcap::ExportPcap::full_path(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  const char *v5; // rsi
  __int64 result; // rax
  _BYTE v7[8]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v8; // [rsp+10h] [rbp-58h]
  __int64 v9; // [rsp+18h] [rbp-50h]
  _BYTE v10[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h]

  if ( *(_BYTE *)(a2 + 48) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v7, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
    v3 = *(_QWORD *)(a2 + 16);
    v4 = 13LL;
    if ( v3 )
      v4 = *(_QWORD *)(a2 + 16);
    v5 = aSniffnetPcap;
    if ( v3 )
      v5 = *(const char **)(a2 + 8);
    std::path::PathBuf::push(v7, v5, v4);
    alloc::string::String::from_utf8_lossy(v10, v8, v9);
    <&str as alloc::string::SpecToString>::spec_to_string(&v13, v11, v12);
    *(_QWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v13;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v10);
    return core::mem::drop(v7);
  }
  else
  {
    result = 0x8000000000000000LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return result;
}