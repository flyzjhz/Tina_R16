cmd_/home/caiyongheng/tina/out/sitar-evb/compile_dir/toolchain/linux-dev//include/asm/.install := bash scripts/headers_install.sh /home/caiyongheng/tina/out/sitar-evb/compile_dir/toolchain/linux-dev//include/asm /home/caiyongheng/tina/lichee/linux-3.10/arch/arm/include/uapi/asm byteorder.h fcntl.h hwcap.h ioctls.h kvm.h kvm_para.h mman.h posix_types.h ptrace.h setup.h sigcontext.h signal.h stat.h statfs.h swab.h unistd.h; bash scripts/headers_install.sh /home/caiyongheng/tina/out/sitar-evb/compile_dir/toolchain/linux-dev//include/asm /home/caiyongheng/tina/lichee/linux-3.10/arch/arm/include/asm ; bash scripts/headers_install.sh /home/caiyongheng/tina/out/sitar-evb/compile_dir/toolchain/linux-dev//include/asm /home/caiyongheng/tina/lichee/linux-3.10/arch/arm/include/generated/uapi/asm ; for F in auxvec.h bitsperlong.h errno.h ioctl.h ipcbuf.h msgbuf.h param.h poll.h resource.h sembuf.h shmbuf.h siginfo.h socket.h sockios.h termbits.h termios.h types.h; do echo "\#include <asm-generic/$$F>" > /home/caiyongheng/tina/out/sitar-evb/compile_dir/toolchain/linux-dev//include/asm/$$F; done; touch /home/caiyongheng/tina/out/sitar-evb/compile_dir/toolchain/linux-dev//include/asm/.install