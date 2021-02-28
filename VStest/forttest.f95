program main
    implicit none
    integer :: i(4) = [4, 1, 2, 3]
    integer :: n

    do n = 1, size(i)
        i(n) = i(n)*2
    end do

    do n = 1, size(i)
        print *,i(n)
    end do

end program main