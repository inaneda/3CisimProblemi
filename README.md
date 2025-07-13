# ThreeBodyProblem Projesi

Bu proje, üç cisim problemini simüle eden bir uygulamadır. Cisimlerin konum ve hızlarının hesaplanması, Newton'un Kütle Çekim Yasası'na dayanır. Proje ayrıca, roketlerin hareketlerini ve itki kuvvetlerini de hesaba katar. Proje hem Linux hem de Windows sistemlerinde çalıştırılabilir.

## Kullanılan Sürümler, Gereksinimler

- C++17 desteği sunan bir derleyici (GCC)
- CMake (v3.10+)
- Linux, Windows veya WSL kurulu bir sistem

---

## Bilgilendirme

`canvas` kütüphanesi ile oluşturulan `.html` dosyası projenin `build` klasöründe bulunmaktadır.

**Ana program dosyası `main.cpp` ise:**

- **Linux:**  
  `/path/to/ThreeBodyProblem/build/3CisimProblemi.html`

- **Windows:**  
  `C:\path\to\ThreeBodyProblem\build\3CisimProblemi.html`

**Ana program dosyası `ekozellikler.cpp` ise:**

- **Linux:**  
  `/path/to/ThreeBodyProblem/build/ekOzellikli3CisimProblemi.html`

- **Windows:**  
  `C:\path\to\ThreeBodyProblem\build\ekOzellikli3CisimProblemi.html`

---

## Projenin Çalıştırılması

### 1. Proje Klasörüne Gitme

İlk olarak, projenin bulunduğu dizine gidilmelidir:

- **Linux veya WSL:**
  ```bash
  cd /path/to/ThreeBodyProblem
  ```

- **Windows:**
  ```cmd
  cd C:\path\to\ThreeBodyProblem
  ```

---

### 2. CMake ile Yapılandırma

`build` klasörüne gidilerek proje CMake ile yapılandırılmalıdır:

- **Linux veya WSL:**
  ```bash
  cd build
  cmake ..
  ```

- **Windows:**
  ```cmd
  cd build
  cmake ..
  ```

---

### 3. Projenin Derlenmesi

- **Linux veya WSL:**
  ```bash
  make --build .
  ```

- **Windows:**
  ```cmd
  cmake --build .
  ```

---

### 4. Projenin Çalıştırılması

Derleme başarılı tamamlandıktan sonra çalıştırmak için:

- **Linux veya WSL:**
  ```bash
  ./ThreeBodyProblem
  ```

- **Windows:**
  ```cmd
  ThreeBodyProblem.exe
  ```
