__int64 __fastcall uu_timeout::status::<impl core::convert::From<uu_timeout::status::ExitStatus> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
        __int64 a1,
        int a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0LL:
    case 3LL:
      result = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(124LL);
      break;
    case 1LL:
      result = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(125LL);
      break;
    case 2LL:
      result = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from((unsigned int)(a2 + 128));
      break;
  }
  return result;
}