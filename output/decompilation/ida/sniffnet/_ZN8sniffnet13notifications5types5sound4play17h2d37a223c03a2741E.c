char __fastcall sniffnet::notifications::types::sound::play(unsigned __int8 a1, char a2)
{
  char result; // al
  __int64 v3; // r15
  __int64 v4; // r14
  const char *v5; // [rsp+0h] [rbp-98h] BYREF
  __int64 v6; // [rsp+8h] [rbp-90h]
  unsigned __int64 v7; // [rsp+10h] [rbp-88h]
  char v8; // [rsp+28h] [rbp-70h]
  __int128 v9; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+40h] [rbp-58h]
  __int128 v11; // [rsp+48h] [rbp-50h] BYREF
  __int64 v12; // [rsp+58h] [rbp-40h]

  result = a1 != 3;
  if ( a2 != 0 && a1 != 3 )
  {
    v3 = qword_18E9ED8[a1];
    v4 = dword_18E9EF0[a1];
    v7 = 0x8000000000000000LL;
    v5 = 0LL;
    v8 = 0;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, &unk_18390D2, 17LL);
    v10 = v12;
    v9 = v11;
    std::thread::Builder::name(&v11, &v5, &v9);
    v5 = (char *)dword_18E9EF0 + v4;
    v6 = v3;
    LOBYTE(v7) = a2;
    ((void (__fastcall *)(__int128 *, __int128 *, const char **))std::thread::Builder::spawn_unchecked)(&v9, &v11, &v5);
    v5 = aSrcNotificatio;
    v6 = 32LL;
    LODWORD(v7) = 86;
    <core::result::Result<T,E> as sniffnet::utils::error_logger::ErrorLogger<T,E>>::log_err(&v11, &v9, &v5);
    return core::ptr::drop_in_place<core::result::Result<std::thread::JoinHandle<()>,std::io::error::Error>>(&v11);
  }
  return result;
}