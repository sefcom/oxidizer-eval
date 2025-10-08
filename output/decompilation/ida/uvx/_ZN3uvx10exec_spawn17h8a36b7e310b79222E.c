// attributes: thunk
__int64 uvx::exec_spawn()
{
  return <std::process::Command as std::os::unix::process::CommandExt>::exec();
}