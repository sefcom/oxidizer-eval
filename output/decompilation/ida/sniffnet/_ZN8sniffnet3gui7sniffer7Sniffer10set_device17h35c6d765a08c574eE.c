__int64 __fastcall sniffnet::gui::sniffer::Sniffer::set_device(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // [rsp+0h] [rbp-78h] BYREF
  __int128 v11; // [rsp+10h] [rbp-68h]
  __int128 v12; // [rsp+20h] [rbp-58h]
  __int128 v13; // [rsp+30h] [rbp-48h]
  __int128 v14; // [rsp+40h] [rbp-38h]

  result = *(_QWORD *)(a1 + 1864);
  if ( result )
  {
    v5 = *(_QWORD *)(a1 + 1856);
    v6 = 80 * result;
    while ( 1 )
    {
      result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16), a2, a3);
      if ( (_BYTE)result )
        break;
      v5 += 80LL;
      v6 -= 80LL;
      if ( !v6 )
        return result;
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, a2, a3);
    core::ptr::drop_in_place<alloc::string::String>(a1 + 1504);
    *(_QWORD *)(a1 + 1520) = v11;
    *(_OWORD *)(a1 + 1504) = v10;
    <sniffnet::networking::types::my_device::MyDevice as core::clone::Clone>::clone(&v10, v5);
    result = core::ptr::drop_in_place<sniffnet::networking::types::capture_context::CaptureSource>(a1 + 720);
    *(_OWORD *)(a1 + 784) = v14;
    v7 = v10;
    v8 = v11;
    v9 = v12;
    *(_OWORD *)(a1 + 768) = v13;
    *(_OWORD *)(a1 + 752) = v9;
    *(_OWORD *)(a1 + 736) = v8;
    *(_OWORD *)(a1 + 720) = v7;
  }
  return result;
}