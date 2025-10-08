__int64 __fastcall uu_shuf::shuf_exec(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // bp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  char v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // [rsp+7h] [rbp-51h] BYREF
  _QWORD v22[3]; // [rsp+8h] [rbp-50h] BYREF
  int v23; // [rsp+20h] [rbp-38h]

  if ( *(_BYTE *)(a2 + 56) )
  {
    if ( (unsigned __int8)<alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::is_empty(*(_QWORD *)(a1 + 16)) )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v22, aNoLinesToRepea, 18LL);
      v23 = 1;
      return alloc::boxed::Box<T>::new(v22);
    }
    v14 = *(_QWORD *)(a2 + 48);
    if ( v14 )
    {
      v15 = *(_BYTE *)(a2 + 57);
      while ( 1 )
      {
        v16 = <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::choose(a1, a3);
        v18 = <&[u8] as uu_shuf::Writable>::write_all_to(v16, v17, a4);
        result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v18);
        if ( result )
          break;
        LOBYTE(v22[0]) = v15;
        v19 = a4[2];
        if ( (unsigned __int64)(*a4 - v19) <= 1 )
        {
          v20 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, v22, 1LL);
          result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v20);
          if ( result )
            return result;
        }
        else
        {
          *(_BYTE *)(a4[1] + v19) = v15;
          a4[2] = v19 + 1;
          result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(0LL);
          if ( result )
            return result;
        }
        if ( !--v14 )
          return 0LL;
      }
      return result;
    }
    return 0LL;
  }
  v22[0] = <alloc::vec::Vec<&std::ffi::os_str::OsStr> as uu_shuf::Shufable>::partial_shuffle(
             a1,
             a3,
             *(_QWORD *)(a2 + 48));
  v22[1] = v7;
  v8 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(v22);
  if ( !v8 )
    return 0LL;
  v10 = *(_BYTE *)(a2 + 57);
  while ( 1 )
  {
    v11 = <&[u8] as uu_shuf::Writable>::write_all_to(v8, v9, a4);
    result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v11);
    if ( result )
      break;
    v21 = v10;
    v12 = a4[2];
    if ( (unsigned __int64)(*a4 - v12) <= 1 )
    {
      v13 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, &v21, 1LL);
      result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v13);
      if ( result )
        return result;
    }
    else
    {
      *(_BYTE *)(a4[1] + v12) = v10;
      a4[2] = v12 + 1;
      result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(0LL);
      if ( result )
        return result;
    }
    v8 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(v22);
    if ( !v8 )
      return 0LL;
  }
  return result;
}