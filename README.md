ThreeBodyProblem Projesi

Bu proje, üç cisim problemini simüle eden bir uygulamadır.  Cisimlerin konum ve hızlarının hesaplanması, Newton'un Kütle Çekim Yasası'na dayanır. Proje ayrıca, roketlerin hareketlerini ve itki kuvvetlerini de hesaba katar. Proje, hem Linux hem de Windows sistemlerinde çalıştırılabilir.

Kullanılan Sürümler, Gereksinimler

C++17 desteği sunan bir derleyici (GCC).
CMake (v3.10).
Linux, Windows veya WSL yüklenmiş bir sistem.

Bilgilendirme

"canvas" kütüphanesi ile oluşturulan ".html" dosyası projenin build klasöründe bulunmaktadır.
Ana program dosyası "main.cpp" ise
Linux   -> '/path/to/ThreeBodyProblem/build/3CisimProblemi.html' 

Windows -> 'C:\path\to\ThreeBodyProblem/build/3CisimProblemi.html'

Ana program dosyası "ekozellikler.cpp" ise
Linux   -> '/path/to/ThreeBodyProblem/build/ekOzellikli3CisimProblemi.html' 

Windows -> 'C:\path\to\ThreeBodyProblem/build/ekOzellikli3CisimProblemi.html'

Projenin Çalıştırılması

1. Projenin Yoluna Gitme

İlk olarak, projenin bulunduğu dizine gidilmelidir. Aşağıdaki komutlarla ThreeBodyProblem projesine erişebilirsiniz:

Linux veya WSL:
cd /path/to/ThreeBodyProblem

Windows:
cd C:\path\to\ThreeBodyProblem

2. Projenin CMake ile Yapılandırılması

Projenin çalıştırılabilmesi için, proje dizini içerisindeki build klasörünü kullanarak CMake ile yapılandırma yapılmalıdır. Şu adımlar takip edilmelidir:

Linux veya WSL:
cd build
cmake ..

Windows:
cd build
cmake ..

3. Projenin Derlenmesi

Projeyi derlemek için şu komut kullanılır:

Linux veya WSL:
make

Windows:
cmake --build .

4. Projenin Çalıştırılması

Derleme başarıyla tamamlandıktan sonra, projeyi çalıştırmak için aşağıdaki komutlar kullanılır:

Linux veya WSL:
./ThreeBodyProblem

Windows:
ThreeBodyProblem.exe
